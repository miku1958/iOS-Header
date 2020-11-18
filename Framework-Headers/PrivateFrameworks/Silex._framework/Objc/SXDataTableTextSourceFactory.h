//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXDataTableTextSourceFactory-Protocol.h>

@class NSString;
@protocol SXSmartFieldFactory;

@interface SXDataTableTextSourceFactory : NSObject <SXDataTableTextSourceFactory>
{
    id<SXSmartFieldFactory> _smartFieldFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SXSmartFieldFactory> smartFieldFactory; // @synthesize smartFieldFactory=_smartFieldFactory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithSmartFieldFactory:(id)arg1;
- (id)textSourceWithFormattedText:(id)arg1 indexPath:(CDStruct_2fea82da)arg2 dataSource:(id)arg3;

@end

