//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAAceView.h>

@class NSArray, NSString, SAUIDomainObjectPicker;

@interface SAUIDisambiguationList : SAAceView
{
}

@property (copy, nonatomic) NSString *disambiguationKey;
@property (strong, nonatomic) SAUIDomainObjectPicker *domainObjectPicker;
@property (copy, nonatomic) NSArray *fallbackCommands;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *selectionResponse;
@property (copy, nonatomic) NSString *speakableDelimiter;
@property (copy, nonatomic) NSString *speakableFinalDelimiter;
@property (copy, nonatomic) NSString *speakableSelectionResponse;
@property (copy, nonatomic) NSString *speakableSuffix;
@property (copy, nonatomic) NSString *title;

+ (id)disambiguationList;
+ (id)disambiguationListWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
