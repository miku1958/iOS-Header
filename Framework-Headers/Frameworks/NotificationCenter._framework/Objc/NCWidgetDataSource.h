//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotificationCenter/NCDataSource-Protocol.h>
#import <NotificationCenter/_NCDataSource-Protocol.h>

@class NSArray, NSString, _NCConcreteDataSource;

@interface NCWidgetDataSource : NSObject <_NCDataSource, NCDataSource>
{
    NSString *_dataSourceIdentifier;
    _NCConcreteDataSource *_concreteDataSource;
}

@property (strong, nonatomic, getter=_concreteDataSource, setter=_setConcreteDataSource:) _NCConcreteDataSource *concreteDataSource; // @synthesize concreteDataSource=_concreteDataSource;
@property (readonly, nonatomic) NSString *dataSourceIdentifier; // @synthesize dataSourceIdentifier=_dataSourceIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *parentDataSourceIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *widgetIdentifiers;

- (void).cxx_destruct;
- (void)addWidgetObserver:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)removeDatumWithIdentifier:(id)arg1;
- (void)removeWidgetObserver:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)replaceWithDatum:(id)arg1;
- (id)widgetDatumWithIdentifier:(id)arg1;

@end

