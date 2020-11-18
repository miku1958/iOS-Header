//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, WBSSavedPassword;

@interface _WBUPasswordPickerTableViewCell : UITableViewCell
{
    WBSSavedPassword *_savedPassword;
    NSString *_searchPattern;
}

@property (readonly, nonatomic) WBSSavedPassword *savedPassword; // @synthesize savedPassword=_savedPassword;
@property (readonly, nonatomic) NSString *searchPattern; // @synthesize searchPattern=_searchPattern;

- (void).cxx_destruct;
- (void)setSavedPassword:(id)arg1 searchPattern:(id)arg2;
- (void)webui_copyPassword;
- (void)webui_copyUserName;

@end

