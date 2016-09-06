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
@property (nonatomic,copy) NSString *myname;
@end


@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    lchBannerView *banner = [[lchBannerView alloc] initWithFrame:CGRectMake(0, 100, 375, 300)];
    [self.view addSubview:banner];
    
    
}
@end
