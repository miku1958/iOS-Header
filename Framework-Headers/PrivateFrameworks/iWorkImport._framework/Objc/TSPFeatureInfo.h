//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSPFeatureInfo : NSObject
{
    NSString *_identifier;
    unsigned long long _readVersion;
    unsigned long long _writeVersion;
}

@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) unsigned long long readVersion; // @synthesize readVersion=_readVersion;
@property (readonly, nonatomic) unsigned long long writeVersion; // @synthesize writeVersion=_writeVersion;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithIdentifier:(id)arg1 readVersion:(unsigned long long)arg2 writeVersion:(unsigned long long)arg3 fromArchiver:(BOOL)arg4;
- (BOOL)isEqual:(id)arg1;

@end

