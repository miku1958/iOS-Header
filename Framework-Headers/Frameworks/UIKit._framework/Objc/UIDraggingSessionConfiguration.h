//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSXPCListenerEndpoint, PBItemCollection, UIDraggingSystemTouchRoutingPolicy;

@interface UIDraggingSessionConfiguration : NSObject <NSSecureCoding>
{
    BOOL _supportsSystemDrag;
    BOOL _initiatedWithPointer;
    unsigned int _coordinateSpaceSourceContextID;
    NSArray *_touchIDs;
    unsigned long long _coordinateSpaceSourceLayerRenderID;
    UIDraggingSystemTouchRoutingPolicy *_routingPolicy;
    PBItemCollection *_itemCollection;
    NSXPCListenerEndpoint *_dataProviderEndpoint;
    NSXPCListenerEndpoint *_axEndpoint;
    NSString *_sceneIdentifier;
    struct CGPoint _initialCentroid;
}

@property (strong, nonatomic) NSXPCListenerEndpoint *axEndpoint; // @synthesize axEndpoint=_axEndpoint;
@property (nonatomic) unsigned int coordinateSpaceSourceContextID; // @synthesize coordinateSpaceSourceContextID=_coordinateSpaceSourceContextID;
@property (nonatomic) unsigned long long coordinateSpaceSourceLayerRenderID; // @synthesize coordinateSpaceSourceLayerRenderID=_coordinateSpaceSourceLayerRenderID;
@property (strong, nonatomic) NSXPCListenerEndpoint *dataProviderEndpoint; // @synthesize dataProviderEndpoint=_dataProviderEndpoint;
@property (nonatomic) struct CGPoint initialCentroid; // @synthesize initialCentroid=_initialCentroid;
@property (nonatomic) BOOL initiatedWithPointer; // @synthesize initiatedWithPointer=_initiatedWithPointer;
@property (strong, nonatomic) PBItemCollection *itemCollection; // @synthesize itemCollection=_itemCollection;
@property (strong, nonatomic) UIDraggingSystemTouchRoutingPolicy *routingPolicy; // @synthesize routingPolicy=_routingPolicy;
@property (strong, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
@property (nonatomic) BOOL supportsSystemDrag; // @synthesize supportsSystemDrag=_supportsSystemDrag;
@property (strong, nonatomic) NSArray *touchIDs; // @synthesize touchIDs=_touchIDs;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
