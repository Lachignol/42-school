--local lspconfig = require('lspconfig')
--
--lspconfig.clangd.setup{
--    cmd = {
--        "clangd",
--        "--header-insertion=never",  -- Ignorez les erreurs d'insertion d'en-tête
--        "--enable-config",            -- Permet l'utilisation de .clangd pour la configuration
--    },
--    on_attach = function(client)
--        -- Désactiver le formatage automatique si vous utilisez Syntastic pour Norminette
--        client.server_capabilities.documentFormattingProvider = false
--        client.server_capabilities.documentRangeFormattingProvider = false
--        
--        -- Assurez-vous que les diagnostics de clangd sont activés
--        client.server_capabilities.diagnosticsProvider = true  
--    end,
--}
--
