//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIKBAutoFillTestExpectedResult : NSObject <NSCoding>
{
    NSMutableDictionary *_textFieldTagToTextFieldType;
    long long _formType;
}

@property (nonatomic) long long formType; // @synthesize formType=_formType;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setType:(long long)arg1 forTextFieldWithTag:(long long)arg2;
- (long long)typeForTextFieldWithTag:(long long)arg1;

@end

