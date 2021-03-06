//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICSAPSessionAbstractOperation.h>

@class NSData;

@interface ICSAPSessionSignDataOperation : ICSAPSessionAbstractOperation
{
    NSData *_data;
    CDUnknownBlockType _responseHandler;
}

@property (copy, nonatomic) NSData *data; // @synthesize data=_data;
@property (copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;

- (void).cxx_destruct;
- (void)executeWithSAPContext:(id)arg1;
- (void)finishWithSAPContextPreparationError:(id)arg1;

@end

