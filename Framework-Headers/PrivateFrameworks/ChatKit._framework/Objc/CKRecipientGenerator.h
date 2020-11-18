//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CKRecipientGenerator : NSObject
{
    NSArray *_searchABPropertyTypes;
}

@property (strong, nonatomic) NSArray *searchABPropertyTypes; // @synthesize searchABPropertyTypes=_searchABPropertyTypes;

+ (id)sharedRecipientGenerator;
- (void).cxx_destruct;
- (void)_appendSearchResults:(id)arg1 identifiers:(id)arg2 abPropertyType:(int)arg3 toArray:(id)arg4;
- (void)getAddressForContact:(id)arg1 address:(id *)arg2 kind:(unsigned long long *)arg3;
- (id)recipientWithAddress:(id)arg1;
- (id)recipientWithContact:(id)arg1;
- (id)recipientWithContactProperty:(id)arg1;

@end
