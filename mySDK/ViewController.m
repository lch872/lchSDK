//
//  ViewController.m
//  mySDK
//
//  Created by lch on 16/9/4.
//  Copyright © 2016年 lch. All rights reserved.
//

#import "ViewController.h"
#import "lchBannerView.h"
//#import "lchSDK.h"



@interface ViewController ()
@property (nonatomic,strong) UIView *myname;
@end


@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.myname = [[UIView alloc] init];
   NSLog(@" %@ ",self.myname);
    printf("retain count = %ld\n",CFGetRetainCount((__bridge CFTypeRef)(self.myname )));
   //NSLog(@" %@ ",lch);
    printf("retain count = %ld\n",CFGetRetainCount((__bridge CFTypeRef)(self.myname )));
    // NSLog(@" %@ ",lch);
    printf("retain count = %ld\n",CFGetRetainCount((__bridge CFTypeRef)(self.myname )));

    
    
}
@end
