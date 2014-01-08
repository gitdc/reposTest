//
//  DetailViewController.h
//  reposTest
//
//  Created by mdf on 1/8/14.
//  Copyright (c) 2014 mdf. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
