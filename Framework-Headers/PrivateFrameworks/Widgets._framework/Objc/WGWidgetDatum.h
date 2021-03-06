//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Widgets/WGDatum-Protocol.h>

@class NSExtension, NSString;

@interface WGWidgetDatum : NSObject <WGDatum>
{
    NSExtension *_representedExtension;
}

@property (readonly, copy, nonatomic) NSString *datumIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSExtension *representedExtension; // @synthesize representedExtension=_representedExtension;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithExtension:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

