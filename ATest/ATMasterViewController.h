//
//  ATMasterViewController.h
//  ATest
//
//  Created by Erich Wood on 11/3/11.
//  Copyright (c) 2011 Woern LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ATDetailViewController;

@interface ATMasterViewController : UITableViewController

@property (strong, nonatomic) ATDetailViewController *detailViewController;

@end
