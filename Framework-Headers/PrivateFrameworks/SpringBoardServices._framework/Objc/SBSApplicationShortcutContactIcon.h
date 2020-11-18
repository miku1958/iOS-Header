//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardServices/SBSApplicationShortcutIcon.h>

@class NSData, NSString;

@interface SBSApplicationShortcutContactIcon : SBSApplicationShortcutIcon
{
    NSString *_contactIdentifier;
    NSString *_firstName;
    NSString *_lastName;
    NSData *_imageData;
}

@property (readonly, strong, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property (readonly, strong, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property (readonly, strong, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property (readonly, strong, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;

- (void)dealloc;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithContactIdentifier:(id)arg1;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 imageData:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
