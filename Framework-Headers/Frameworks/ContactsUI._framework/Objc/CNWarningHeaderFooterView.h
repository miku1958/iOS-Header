//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNContactTableViewHeaderFooterView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNWarningHeaderFooterView : CNContactTableViewHeaderFooterView
{
    BOOL _shouldDisplayWarningIcon;
    NSString *_warningText;
}

@property (nonatomic) BOOL shouldDisplayWarningIcon; // @synthesize shouldDisplayWarningIcon=_shouldDisplayWarningIcon;
@property (strong, nonatomic) NSString *warningText; // @synthesize warningText=_warningText;

+ (id)exclamationMark;
- (void).cxx_destruct;
- (id)warningAttributedText;

@end

