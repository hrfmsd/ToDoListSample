//
//  DetailViewController.h
//  TodoListSample
//
//  Created by hrfmsd on 2013/06/22.
//  Copyright (c) 2013年 hrfmsd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
