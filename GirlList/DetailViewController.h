//
//  DetailViewController.h
//  GirlList
//
//  Created by kevin on 8/26/13.
//  Copyright (c) 2013 RebelColony. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
