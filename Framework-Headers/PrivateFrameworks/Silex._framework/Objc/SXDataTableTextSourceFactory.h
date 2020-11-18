//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXDataTableTextSourceFactory-Protocol.h>

@class NSString;
@protocol SXActionProvider;

@interface SXDataTableTextSourceFactory : NSObject <SXDataTableTextSourceFactory>
{
    id<SXActionProvider> _actionProvider;
}

@property (readonly, nonatomic) id<SXActionProvider> actionProvider; // @synthesize actionProvider=_actionProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithActionProvider:(id)arg1;
- (id)textSourceWithFormattedText:(id)arg1 indexPath:(CDStruct_2fea82da)arg2 dataSource:(id)arg3;

@end

