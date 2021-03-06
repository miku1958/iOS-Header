//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class ACAccountType, NSString;

@interface SUScriptAppleAccountType : SUScriptObject
{
    ACAccountType *_accountType;
}

@property (readonly) id accessGranted;
@property (readonly) NSString *accountTypeDescription;
@property (readonly) NSString *identifier;
@property (readonly, nonatomic) ACAccountType *nativeAccountType; // @synthesize nativeAccountType=_accountType;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)_className;
- (id)attributeKeys;
- (void)dealloc;
- (id)initWithACAccountType:(id)arg1;
- (id)scriptAttributeKeys;

@end

