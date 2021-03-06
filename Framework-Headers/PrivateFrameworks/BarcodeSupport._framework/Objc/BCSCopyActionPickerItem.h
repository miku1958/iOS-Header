//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BarcodeSupport/BCSActionPickerItem.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSCopyActionPickerItem : BCSActionPickerItem
{
    NSString *_textToCopy;
}

@property (readonly, copy, nonatomic) NSString *textToCopy; // @synthesize textToCopy=_textToCopy;

- (void).cxx_destruct;
- (id)icon;
- (id)initWithAction:(id)arg1 textToCopy:(id)arg2;
- (BOOL)isCopyActionItem;
- (void)performAction;

@end

