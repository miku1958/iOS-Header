//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BookUtility/BUEncodedBlockInfo-Protocol.h>

@class NSString;

@interface BUEncodedBlockInfoInternal : NSObject <BUEncodedBlockInfo>
{
    unsigned long long _encodedLength;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long decodedLength;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long encodedLength; // @synthesize encodedLength=_encodedLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithEncodedLength:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;

@end
