//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MIME/MFGuaranteedCollectingDataConsumer-Protocol.h>

@class MFDataHolder, NSString;

@interface MFZeroCopyDataConsumer : NSObject <MFGuaranteedCollectingDataConsumer>
{
    MFDataHolder *_dataHolder;
    BOOL _done;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)appendData:(id)arg1;
- (id)data;
- (void)done;
- (id)init;

@end

