/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@class NSURLRequest, NSURLResponse, WKFrameInfo;

@interface WKNavigationResponse : NSObject {
    struct RetainPtr<WKFrameInfo> { 
        void *m_ptr; 
    struct RetainPtr<NSURLRequest> { 
        void *m_ptr; 
    struct RetainPtr<NSURLResponse> { 
        void *m_ptr; 
    BOOL _canShowMIMEType;
    } _frame;
    } _request;
    } _response;
}

@property(readonly) WKFrameInfo * _frame;
@property(readonly) NSURLRequest * _request;
@property BOOL canShowMIMEType;
@property(getter=isForMainFrame,readonly) BOOL forMainFrame;
@property(copy) NSURLResponse * response;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_frame;
- (id)_request;
- (BOOL)canShowMIMEType;
- (id)description;
- (BOOL)isForMainFrame;
- (id)response;
- (void)setCanShowMIMEType:(BOOL)arg1;
- (void)setResponse:(id)arg1;

@end
