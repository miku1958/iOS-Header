//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MapKit/MKPlaceEncyclopedicRowViewItem-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MKPlaceEncyclopedicRowViewTextItem : NSObject <MKPlaceEncyclopedicRowViewItem>
{
    NSString *label;
    id value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *label; // @synthesize label;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id value; // @synthesize value;

+ (id)textItemWithLabel:(id)arg1 value:(id)arg2;
- (void).cxx_destruct;

@end

