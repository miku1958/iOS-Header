//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PXCMMComposeRecipientSelectionSnapshot : NSObject
{
    NSArray *_selectedComposeRecipients;
    NSArray *_selectedRecipients;
}

@property (readonly, copy, nonatomic) NSArray *selectedComposeRecipients; // @synthesize selectedComposeRecipients=_selectedComposeRecipients;
@property (readonly, copy, nonatomic) NSArray *selectedRecipients; // @synthesize selectedRecipients=_selectedRecipients;

+ (id)new;
- (void).cxx_destruct;
- (id)init;
- (id)initWithSelectedComposeRecipients:(id)arg1 selectedRecipients:(id)arg2;

@end
