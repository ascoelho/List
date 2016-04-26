//
//  AddItemViewController.h
//  List
//
//  Created by Anthony Coelho on 2016-04-04.
//  Copyright © 2016 Vectura. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AddItemViewControllerDelegate <NSObject>

-(void) didSaveNewTodo: (NSString *)todoText;


@end

@interface AddItemViewController : UIViewController

@property (nonatomic, strong) id <AddItemViewControllerDelegate> delegate;
@property (weak, nonatomic) IBOutlet UITextField *textfield;

- (IBAction)cancel:(id)sender;
- (IBAction)save:(id)sender;

@end
