//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@protocol NFContainerRegistry, NFResolver;

@protocol NFAssembly <NSObject>
- (void)loadInRegistry:(id<NFContainerRegistry>)arg1;

@optional
- (void)loadedContainer:(id<NFResolver>)arg1;
@end

