//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface UMLogMessage : NSObject
{
    NSMutableArray *_publicStrings;
    NSMutableArray *_privateStrings;
}

@property (readonly, nonatomic) NSString *privateString;
@property (strong, nonatomic) NSMutableArray *privateStrings; // @synthesize privateStrings=_privateStrings;
@property (readonly, nonatomic) NSString *publicString;
@property (strong, nonatomic) NSMutableArray *publicStrings; // @synthesize publicStrings=_publicStrings;

+ (void)_addTaskInfoFrom:(id)arg1 toMessage:(id)arg2;
+ (void)_addUserInfoFrom:(id)arg1 toMessage:(id)arg2;
+ (id)messageWithPrivateFormat:(id)arg1;
+ (id)messageWithPrivateFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
+ (id)messageWithPublicFormat:(id)arg1;
+ (id)messageWithPublicFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
+ (id)messageWithTask:(id)arg1;
+ (id)messageWithTask:(id)arg1 privateFormat:(id)arg2;
+ (id)messageWithTask:(id)arg1 publicFormat:(id)arg2;
+ (id)messageWithUser:(id)arg1;
+ (id)messageWithUser:(id)arg1 privateFormat:(id)arg2;
+ (id)messageWithUser:(id)arg1 publicFormat:(id)arg2;
- (void).cxx_destruct;
- (id)_stringForArray:(id)arg1;
- (void)addPrivateFormat:(id)arg1;
- (void)addPublicFormat:(id)arg1;
- (id)init;

@end

