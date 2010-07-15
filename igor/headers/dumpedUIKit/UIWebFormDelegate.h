/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIWebFormDelegate.h"
#import <Foundation/NSObject.h>
#import "UIKit-Structs.h"
#import "WebFormDelegate.h"

@class NSMutableDictionary, UIWebFormCompletionController;
@protocol BrowserDocumentController;

__attribute__((visibility("hidden")))
@interface UIWebFormDelegate : NSObject <WebFormDelegate> {
@private
	UIWebFormCompletionController* _completionController;
	id<BrowserDocumentController> _controller;
	NSMutableDictionary* _editedForms;
}
-(void)dealloc;
-(void)frame:(id)frame sourceFrame:(id)frame2 willSubmitForm:(id)form withValues:(id)values submissionListener:(id)listener;
-(void)textDidChangeInTextArea:(id)text inFrame:(id)frame;
-(void)textDidChangeInTextField:(id)text inFrame:(id)frame;
-(void)textFieldDidBeginEditing:(id)textField inFrame:(id)frame;
-(void)textFieldDidEndEditing:(id)textField inFrame:(id)frame;
-(BOOL)textField:(id)field doCommandBySelector:(SEL)selector inFrame:(id)frame;
-(BOOL)textField:(id)field shouldHandleEvent:(GSEventRef)event inFrame:(id)frame;
-(id)initWithController:(id)controller;
-(void)dataSourceHasChangedForFrame:(id)frame;
-(BOOL)formWasEdited;
-(void)formWillHide;
-(void)frameLayoutHasChanged:(id)changed;
-(void)setController:(id)controller;
-(void)formElementDidSetValue:(id)formElement inFrame:(id)frame;
-(void)formElementDidFocus:(id)formElement inFrame:(id)frame;
-(void)formElementDidBlur:(id)formElement inFrame:(id)frame;
-(XXStruct_HeigOC)suggestionsForString:(id)string inputIndex:(unsigned)index;
-(BOOL)hasCurrentSuggestions;
-(void)acceptedAutoFillWord:(id)word;
-(void)autoFillWithElementValue;
@end

@interface UIWebFormDelegate (FileInternal)
-(void)_didEditFormElement:(id)element inFrame:(id)frame;
-(BOOL)_shouldIgnoreFormTextChangesInFrame:(id)frame;
-(void)_clearEditedFormsInFrame:(id)frame;
@end

