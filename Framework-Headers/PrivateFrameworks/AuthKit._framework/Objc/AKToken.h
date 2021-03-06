//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface AKToken : NSObject
{
    NSDate *_expirationDate;
    NSString *_stringValue;
    NSString *_name;
}

@property (readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;

+ (id)tokenWithBase64String:(id)arg1;
+ (id)tokenWithValue:(id)arg1 lifetime:(id)arg2;
- (void).cxx_destruct;

@end

