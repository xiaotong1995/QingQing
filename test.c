#include <stdio.h>
#include <string.h>
#include <openssl/sha.h>

int main() {
    unsigned char data[] = "abc"; // 输入数据
    unsigned char digest[SHA256_DIGEST_LENGTH]; // 存储散列结果的数组

    // 计算散列值
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, data, strlen((char *)data));
    SHA256_Final(digest, &sha256);

    // 打印散列值
    for(int i = 0; i < SHA256_DIGEST_LENGTH; i++)
        printf("%02x", digest[i]);
    printf("\n");

    return 0;
}
