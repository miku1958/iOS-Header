//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNPropertyGroupItem.h>

@class CNInstantMessageAddress;

__attribute__((visibility("hidden")))
@interface CNPropertyGroupInstantMessageItem : CNPropertyGroupItem
{
}

@property (readonly, nonatomic) CNInstantMessageAddress *imAddress;

+ (id)emptyValueForLabel:(id)arg1;
- (id)defaultActionURL;
- (id)displayLabel;
- (id)displayStringForValue:(id)arg1;
- (id)editingStringValue;
- (BOOL)isEquivalentToItem:(id)arg1;
- (id)valueForDisplayString:(id)arg1;

@end
