//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVDescription.h>

@class NSData;

@interface HMDTLVBase : HMDTLVDescription
{
    NSData *_tlvDatablob;
}

@property (readonly, nonatomic) NSData *tlvDatablob; // @synthesize tlvDatablob=_tlvDatablob;

- (void).cxx_destruct;
- (BOOL)_parse:(id)arg1;
- (id)_parseArray:(id)arg1 result:(id *)arg2 objectCreator:(CDUnknownBlockType)arg3;
- (BOOL)_parseFields:(id)arg1;
- (BOOL)_parseFromTLVData;
- (BOOL)_parseMandatory:(id)arg1 optional:(id)arg2;
- (id)initWithTLVData:(id)arg1;

@end
