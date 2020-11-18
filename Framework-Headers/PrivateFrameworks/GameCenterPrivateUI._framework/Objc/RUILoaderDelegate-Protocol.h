//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterPrivateUI/NSObject-Protocol.h>

@class NSError, NSHTTPURLResponse, NSURLRequest, NSURLResponse, NSURLSessionConfiguration, RUILoader, RUIObjectModel;

@protocol RUILoaderDelegate <NSObject>
- (void)loader:(RUILoader *)arg1 didFailWithError:(NSError *)arg2;
- (void)loader:(RUILoader *)arg1 receivedObjectModel:(RUIObjectModel *)arg2 actionSignal:(int)arg3;

@optional
- (void)loader:(RUILoader *)arg1 didReceiveHTTPResponse:(NSHTTPURLResponse *)arg2;
- (NSURLRequest *)loader:(RUILoader *)arg1 willLoadRequest:(NSURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3;
- (NSURLSessionConfiguration *)sessionConfigurationForLoader:(RUILoader *)arg1;
@end

