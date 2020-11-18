//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/JSExport-Protocol.h>

@class IKDOMCDATASection, IKDOMComment, IKDOMDocument, IKDOMDocumentFragment, IKDOMElement, IKDOMImplementation, IKDOMNode, IKDOMNodeList, IKDOMText, IKJSNavigationDocument, JSValue, NSArray, NSDictionary, NSString;

@protocol IKJSDOMDocument <JSExport>

@property (readonly, strong, nonatomic) IKDOMElement *documentElement;
@property (strong, nonatomic) NSString *documentURI;
@property (readonly, weak, nonatomic) IKDOMImplementation *implementation;
@property (readonly, strong, nonatomic) NSString *inputEncoding;
@property (readonly, weak, nonatomic) IKJSNavigationDocument *navigationDocument;
@property (nonatomic) BOOL strictErrorChecking;
@property (readonly, strong, nonatomic) NSString *xmlEncoding;
@property (nonatomic) BOOL xmlStandalone;
@property (strong, nonatomic) NSString *xmlVersion;

- (IKDOMNode *)adoptNode:(IKDOMNode *)arg1;
- (IKDOMCDATASection *)createCDATASection:(NSString *)arg1;
- (IKDOMComment *)createComment:(NSString *)arg1;
- (IKDOMDocumentFragment *)createDocumentFragment;
- (IKDOMElement *)createElement:(NSString *)arg1;
- (IKDOMText *)createTextNode:(NSString *)arg1;
- (IKDOMElement *)getElementById:(NSString *)arg1;
- (IKDOMNodeList *)getElementsByTagName:(NSString *)arg1;
- (NSArray *)matchingImpressions:(NSString *)arg1:(JSValue *)arg2;
- (NSArray *)recordedImpressions:(JSValue *)arg1;
- (void)replace:(IKDOMDocument *)arg1;
- (void)runTest:(NSString *)arg1:(NSDictionary *)arg2;
- (void)scrollToTop;
- (void)setNeedsUpdate;
- (NSArray *)snapshotImpressions;
@end

