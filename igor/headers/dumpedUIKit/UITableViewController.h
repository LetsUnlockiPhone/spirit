/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIViewController.h"
#import "UITableViewDelegate.h"
#import "UIKit-Structs.h"
#import "UITableViewDataSource.h"

@class UITableView;

@interface UITableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
@private
	int _tableViewStyle;
	id _keyboardSupport;
}
@property(retain, nonatomic) UITableView* tableView;
-(id)init;
-(id)initWithStyle:(int)style;
-(void)dealloc;
-(id)existingTableView;
-(void)loadView;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)_adjustTableForKeyboardInfo:(id)keyboardInfo;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;
@end

