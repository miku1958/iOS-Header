//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKDOMNode, NSMutableDictionary;

@interface IKDOMNodeData : NSObject
{
    BOOL _updated;
    BOOL _childrenUpdated;
    BOOL _subtreeUpdated;
    BOOL _autoHighlightRead;
    BOOL _bindingUpdated;
    BOOL _dataUpdated;
    IKDOMNode *_ownerJSNode;
    NSMutableDictionary *_featuresMap;
}

@property (nonatomic, getter=isAutoHighlightRead) BOOL autoHighlightRead; // @synthesize autoHighlightRead=_autoHighlightRead;
@property (nonatomic, getter=isBindingUpdated) BOOL bindingUpdated; // @synthesize bindingUpdated=_bindingUpdated;
@property (nonatomic, getter=isChildrenUpdated) BOOL childrenUpdated; // @synthesize childrenUpdated=_childrenUpdated;
@property (nonatomic, getter=isDataUpdated) BOOL dataUpdated; // @synthesize dataUpdated=_dataUpdated;
@property (strong, nonatomic) NSMutableDictionary *featuresMap; // @synthesize featuresMap=_featuresMap;
@property (weak, nonatomic) IKDOMNode *ownerJSNode; // @synthesize ownerJSNode=_ownerJSNode;
@property (nonatomic, getter=isSubtreeUpdated) BOOL subtreeUpdated; // @synthesize subtreeUpdated=_subtreeUpdated;
@property (nonatomic, getter=isUpdated) BOOL updated; // @synthesize updated=_updated;

+ (id)jsNodeDataForNode:(struct _xmlNode *)arg1 create:(BOOL)arg2;
+ (void)load;
- (void).cxx_destruct;
- (id)featureForName:(id)arg1;
- (void)setFeature:(id)arg1 forName:(id)arg2;

@end

