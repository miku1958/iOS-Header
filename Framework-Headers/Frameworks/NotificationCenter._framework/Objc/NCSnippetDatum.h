//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <NotificationCenter/NCDatum-Protocol.h>

@class BBBulletin, NSString;

@interface NCSnippetDatum : NSObject <NCDatum>
{
    BBBulletin *_representedBulletin;
}

@property (readonly, copy, nonatomic) NSString *datumIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BBBulletin *representedBulletin; // @synthesize representedBulletin=_representedBulletin;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithBulletin:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

