//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCFlintResourceManager, NUEmbedConfigurationOperationResult;
@protocol FCNewsAppConfigurationManager;

@interface NUEmbedConfigurationOperation : FCOperation
{
    CDUnknownBlockType _completion;
    id<FCNewsAppConfigurationManager> _appConfigurationManager;
    FCFlintResourceManager *_flintResourceManager;
    NUEmbedConfigurationOperationResult *_result;
}

@property (strong, nonatomic) id<FCNewsAppConfigurationManager> appConfigurationManager; // @synthesize appConfigurationManager=_appConfigurationManager;
@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (strong, nonatomic) FCFlintResourceManager *flintResourceManager; // @synthesize flintResourceManager=_flintResourceManager;
@property (strong, nonatomic) NUEmbedConfigurationOperationResult *result; // @synthesize result=_result;

- (void).cxx_destruct;
- (id)initWithAppConfigManager:(id)arg1 flintResourceManager:(id)arg2;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;

@end

