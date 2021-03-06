//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class ISDataProvider, SSAuthenticationContext, SSURLRequestProperties;

@interface SUXMLHTTPStoreRequestOperation : ISOperation
{
    CDUnknownBlockType _outputBlock;
    SSURLRequestProperties *_requestProperties;
    SSAuthenticationContext *_authenticationContext;
    ISDataProvider *_dataProvider;
}

@property (strong, nonatomic) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
@property (strong, nonatomic) ISDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property (copy) CDUnknownBlockType outputBlock;

- (void).cxx_destruct;
- (id)initWithRequestProperties:(id)arg1;
- (void)run;

@end

