//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSOperationQueue;

@interface TSKDocumentRootICloudObserver : NSObject
{
    long long _identifier;
    NSOperationQueue *_operationQueue;
    CDUnknownBlockType _block;
    long long _identifer;
}

@property (readonly, nonatomic) long long identifer; // @synthesize identifer=_identifer;

- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (void)invokeWithDocumentRoot:(id)arg1;

@end
