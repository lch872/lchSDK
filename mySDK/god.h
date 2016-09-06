//
//  god.h
//  mySDK
//
//  Created by lch on 16/9/6.
//  Copyright © 2016年 lch. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^lchcy)();
@interface god : NSObject
@property (nonatomic,copy) lchcy myblock;
@end
