//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Widgets/WGDataSource-Protocol.h>

@class NSString;
@protocol WGDatum;

@protocol _WGDataSource <WGDataSource>
- (void)removeDatumWithIdentifier:(NSString *)arg1;
- (void)replaceWithDatum:(id<WGDatum>)arg1;
@end
