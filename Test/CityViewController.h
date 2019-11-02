//
//  CityViewController.h
//  Test
//
//  Created by Jessen hsu on 2019/10/27.
//  Copyright © 2019 Jessen hsu. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CityViewController : UITableViewController

@property (nonatomic, strong)void(^MyBlock)(NSMutableArray *, UITableView *);

@property (nonatomic, strong)UITextField *searchField;

@end

NS_ASSUME_NONNULL_END
