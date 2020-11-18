//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKCOAddress.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSKCOIdAddress : TSKCOAddress
{
    NSString *_identifier;
}

@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

+ (id)addressWithId:(id)arg1;
+ (id)addressWithIdPath:(id)arg1;
+ (id)addressWithPath:(id)arg1;
+ (id)addressWithUUID:(id)arg1;
+ (id)addressWithUUIDPath:(id)arg1;
+ (id)idFromIdPath:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithParent:(id)arg1 identifier:(id)arg2;
- (id)initWithUnarchiver:(id)arg1 message:(const struct Address *)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)pathElement;
- (void)saveToArchiver:(id)arg1 message:(struct Address *)arg2;

@end

