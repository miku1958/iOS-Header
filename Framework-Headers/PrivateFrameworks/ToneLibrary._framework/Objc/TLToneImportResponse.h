//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TLToneImportResponse : NSObject
{
    long long _statusCode;
    NSString *_toneIdentifier;
}

@property (readonly, nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property (readonly, nonatomic) NSString *toneIdentifier; // @synthesize toneIdentifier=_toneIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)initWithStatusCode:(long long)arg1 toneIdentifier:(id)arg2;

@end

