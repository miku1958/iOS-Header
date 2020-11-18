//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface INIntentResponseCodableCode : NSObject <NSSecureCoding>
{
    BOOL _success;
    long long _value;
    NSString *_name;
    NSString *_formatString;
    NSString *_formatStringLocID;
}

@property (copy, nonatomic) NSString *formatString; // @synthesize formatString=_formatString;
@property (copy, nonatomic) NSString *formatStringLocID; // @synthesize formatStringLocID=_formatStringLocID;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) NSArray *parameterNames;
@property (nonatomic, getter=isSuccess) BOOL success; // @synthesize success=_success;
@property (nonatomic) long long value; // @synthesize value=_value;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

