//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MIME/MFDataConsumer-Protocol.h>

@class NSString;

@interface MFBlockDataConsumer : NSObject <MFDataConsumer>
{
    CDUnknownBlockType _appendHandler;
    CDUnknownBlockType _doneHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)appendData:(id)arg1;
- (void)done;
- (id)initWithAppendHandler:(CDUnknownBlockType)arg1 doneHandler:(CDUnknownBlockType)arg2;

@end

