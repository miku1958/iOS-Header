//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAStartRequest.h>

@class SADomainObject, SAUIDomainObjectPicker;

@interface SAUIDomainObjectPickerSelection : SAStartRequest
{
}

@property (strong, nonatomic) SAUIDomainObjectPicker *domainObjectPicker;
@property (strong, nonatomic) SADomainObject *selectedItem;

+ (id)domainObjectPickerSelection;
+ (id)domainObjectPickerSelectionWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end

