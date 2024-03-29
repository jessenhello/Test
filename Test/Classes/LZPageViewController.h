//
//  LZPageViewController.h
//  LZSegmentPageController
//
//  Created by nacker on 16/3/25.
//  Copyright © 2016年 帶頭二哥 QQ:648959. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol LZPageViewControllerDelegate<NSObject>
- (void)addData;
@end
@interface LZPageViewController : UIViewController

@property (nonatomic, weak)id<LZPageViewControllerDelegate>delegate;
- (instancetype)initWithTitles:(NSArray *)titlesArray controllersClass:(NSArray *)controllersClass;


@end
