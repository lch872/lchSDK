Pod::Spec.new do |s|
s.name         = 'lchSDK'
s.version      = '0.0.2'
s.summary      = 'Personal development SDK on iOS'
s.homepage     = 'https://github.com/lch872/lchSDK'
s.license      = 'MIT'
s.authors      = {'lch' => 'lch872@qq.com'}
s.platform     = :ios, '7.0'
s.source       = {:git => 'https://github.com/lch872/lchSDK.git', :tag => s.version}
s.source_files = 'lchSDK/**/*.{h,m}'
s.requires_arc = true
end

