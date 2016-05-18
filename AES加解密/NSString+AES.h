//
//  NSString+AES.h
//  AES_256
//
//  Created by 钟淳亚 on 16/4/8.
//  Copyright © 2016年 钟淳亚. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSData+AES.h"

@interface NSString (AES)

//加密
- (NSString *) AES256_Encrypt:(NSString *)key;

//解密
- (NSString *) AES256_Decrypt:(NSString *)key;

@end
