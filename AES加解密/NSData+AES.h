//
//  NSData+AES.h
//  AES_256
//
//  Created by 钟淳亚 on 16/4/8.
//  Copyright © 2016年 钟淳亚. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonDigest.h>
#import <CommonCrypto/CommonCryptor.h>

@interface NSData (AES)

//加密
- (NSData *) AES256_Encrypt:(NSString *)key;

//解密
- (NSData *) AES256_Decrypt:(NSString *)key;

//追加64编码
- (NSString *)newStringInBase64FromData;

+ (NSString*)base64encode:(NSString*)str;

@end
